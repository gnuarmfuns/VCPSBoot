#!/usr/bin/env python

import boto3
import json


class Policy():
    def __init__(self, name, policy=''):
        self.name = name
        self.policy = policy
        self.client = boto3.client('iot')

    def create(self):
        assert self.exists() == False, "Policy already exists"
        print("Creating a policy on AWS IoT Core.")
        self.client.create_policy(policyName=self.name,
            policyDocument=self.policy)

    def delete(self):
        assert self.exists() == True, "Policy does not exist, cannot be deleted"
        print("Deleted a policy named {} on AWS IoT Core.".format(self.name))
        self.client.delete_policy(policyName=self.name)

    def exists(self):
        policies = self.client.list_policies()['policies']
        for policy in policies:
            if self.name == policy['policyName']:
                return True
        return False


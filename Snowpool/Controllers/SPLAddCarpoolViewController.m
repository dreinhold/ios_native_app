//
//  SPLAddCarpoolViewController.m
//  Snowpool
//
//  Created by Tim Ross on 8/03/14.
//  Copyright (c) 2014 Snowpool Limited. All rights reserved.
//

#import "SPLAddCarpoolViewController.h"

@interface SPLAddCarpoolViewController ()

@end

@implementation SPLAddCarpoolViewController

#pragma mark -
#pragma mark IBAction methods

- (IBAction)cancelButtonPressed:(id)sender
{
    [self.delegate addCarpoolViewControllerDidCancel:self];
}

- (void)doneButtonPressed:(id)sender
{
    [self.delegate addCarpoolViewControllerDidAddCarpool:self];
}

- (IBAction)viewWasTapped:(id)sender
{
    [self.view endEditing:YES];
}

@end

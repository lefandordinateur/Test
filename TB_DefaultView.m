//
//  TB-DefaultView.m
//  Test
//
//  Created by jessy giacomoni on 25/04/13.
//  Copyright (c) 2013 jessy giacomoni. All rights reserved.
//

#import "TB_DefaultView.h"


@implementation TB_DefaultView

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:
                                @"Storyboard-iPad" bundle:[NSBundle mainBundle]];
    
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
     [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

//
//  MyNavigationViewAppDelegate.h
//  YoYoBrain
//
//  Created by Jacob Bunker on 3/9/15.
//  Copyright (c) 2015 Jacob Bunker, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstViewController.h"

@interface MyNavigationViewAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) FirstViewController *firstViewController;

@end


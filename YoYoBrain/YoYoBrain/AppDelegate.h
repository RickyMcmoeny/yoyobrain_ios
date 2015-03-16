//
//  AppDelegate.h
//  YoYoBrain
//
//  Created by Jacob on 2/15/15.
//  Copyright (c) 2015 Jacob Bunker, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstViewController.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) FirstViewController *firstViewController;

@end



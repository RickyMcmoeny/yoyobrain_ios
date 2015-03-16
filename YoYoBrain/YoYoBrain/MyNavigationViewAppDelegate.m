//
//  MyNavigationViewAppDelegate.m
//  YoYoBrain
//
//  Created by Jacob Bunker on 3/9/15.
//  Copyright (c) 2015 Jacob Bunker, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MyNavigationViewAppDelegate.h"

@implementation MyNavigationViewAppDelegate

@synthesize navigationController;
@synthesize firstViewController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    //create the navigation controller and add the controllers view to the window
    navigationController = [[UINavigationController alloc] init];
    [self.window addSubview:[self.navigationController view]];
    
    //check if the first viewcontroller eixsts, otherwise create it
    if(self.firstViewController == nil)
    {
        FirstViewController *firstView = [[FirstViewController alloc] init];
        self.firstViewController = firstView;
    }
    
    //push the first viewcontroller into the navigation view controller stack
    [self.navigationController pushViewController:self.firstViewController animated:YES];
    
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    //do nothing
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    //do nothing
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    //do nothing
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    //do nothing
}

- (void)applicationWillTerminate:(UIApplication *)application {
    //do nothing
}

@end
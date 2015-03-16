//
//  FlashCardData.h
//  YoYoBrain
//
//  Created by Jacob Bunker on 3/9/15.
//  Copyright (c) 2015 Jacob Bunker, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlashCardData : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *studyButton;
@property (weak, nonatomic) IBOutlet UIButton *backButton;

- (IBAction)goBack:(id)sender;
- (IBAction)studySet:(id)sender;


@end

//
//  ViewController.h
//  YoYoBrain
//
//  Created by Jacob on 2/15/15.
//  Copyright (c) 2015 Jacob Bunker, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) IBOutlet UIButton *Right;
@property (nonatomic, weak) IBOutlet UIButton *Wrong;
@property (nonatomic, weak) IBOutlet UIButton *Next;


@property (nonatomic, weak) IBOutlet UILabel *Question;
@property (nonatomic, weak) IBOutlet UILabel *Answer;
@property (nonatomic, weak) IBOutlet UILabel *QuestionText;
@property (nonatomic, weak) IBOutlet UILabel *AnswerText;


@end


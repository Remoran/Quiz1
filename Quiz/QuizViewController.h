//
//  QuizViewController.h
//  Quiz
//
//  Created by Ryan on 1/15/14.
//  Copyright (c) 2014 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface QuizViewController : UIViewController
{
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // The view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

- (IBAction)showQuestion:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *questionLabel;

- (IBAction)showAnswer:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *answerLabel;


@end

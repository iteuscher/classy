//
//  ClassyViewController.h
//  Classy
//
//  Created by Natalie Hartman on 4/8/14.
//  Copyright (c) 2014-2018 Natalie Hartman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassyViewController : UIViewController {
    
    IBOutlet UILabel* countdownLabel;
    IBOutlet UILabel* currentActivityLabel;
    IBOutlet UIProgressView *progressView;
    IBOutlet UILabel* nextActivityLabel;
    IBOutlet UILabel* nextActivityStartTimeLabel;
    
    IBOutlet UILabel *notInSessionLabel;
    NSTimer* countdownTimer;
}

@end


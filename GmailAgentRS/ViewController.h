//
//  RSViewController.h
//  GmailAgentRS
//
//  Created by Roman Chopovenko on 20.07.15.
//  Copyright (c) 2015 Roman Chopovenko. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GTMOAuth2ViewControllerTouch.h"
#import "GTLGmail.h"

@interface ViewController : UIViewController

@property (nonatomic, strong) GTLServiceGmail *service;
@property (nonatomic, strong) UITextView *output;

@end

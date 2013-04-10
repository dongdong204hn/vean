//
//  SendMessageController.h
//  VOA
//
//  Created by zhao song on 13-1-23.
//  Copyright (c) 2013年 buaa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserMessage.h"
#import "MyUser.h"
#import "NSString+URLEncoding.h"
#import "LogController.h"

@interface SendMessageController : UIViewController

@property (nonatomic, retain) IBOutlet UILabel *nameLab;
@property (nonatomic, retain) IBOutlet UITextView *messageTv;
@property (nonatomic, retain) IBOutlet UIButton *sendBtn;
@property (nonatomic, retain) UIAlertView *sucAlert;
@property (nonatomic, retain) UserMessage *userMsg;
@end

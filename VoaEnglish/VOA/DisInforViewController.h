//
//  DisInforViewController.h
//  VOA
//
//  Created by zhao song on 13-1-22.
//  Copyright (c) 2013年 buaa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STTweetLabel.h"
#import "UIImageView+WebCache.h"
#import "DDXML.h"
#import "DDXMLElementAdditions.h"
#import "PlayViewController.h"
#import "VOAView.h"
#import "MBProgressHUD.h"
#import "JMWhenTapped.h"
#import "StudyTime.h"

@interface DisInforViewController : UIViewController <STLinkProtocol,UITableViewDelegate,UITableViewDataSource,MBProgressHUDDelegate>

@property (nonatomic, retain) IBOutlet TextScrollView *inforScroll;
@property (nonatomic, retain) IBOutlet TextScrollView *appScroll;
@property (nonatomic, retain) IBOutlet UIView       *recordView;
@property (nonatomic, retain) IBOutlet UIView       *appView;
@property (nonatomic, retain) IBOutlet UILabel      *avgOfDayStudyTLab;
@property (nonatomic, retain) IBOutlet UILabel      *todayStudyTLab;
@property (nonatomic, retain) IBOutlet UILabel      *countOfReadedLab;
@property (nonatomic, retain) IBOutlet UILabel      *loveClassLab;
@property (nonatomic, retain) IBOutlet UILabel      *countOfCollectVoaLab;
@property (nonatomic, retain) IBOutlet UILabel      *countOfCollectSenLab;
@property (nonatomic, retain) IBOutlet UILabel      *countOfCollectWordLab;
@property (nonatomic, retain) IBOutlet UILabel      *avgOfRemWordLab;
@property (nonatomic, retain) IBOutlet UILabel      *remWorstWord;
@property (nonatomic, retain) IBOutlet UIImageView  *img1;
@property (nonatomic, retain) IBOutlet UIImageView  *img2;
@property (nonatomic, retain) IBOutlet UIImageView  *img3;
@property (nonatomic, retain) IBOutlet UIImageView  *img4;
@property (nonatomic, retain) IBOutlet UIImageView  *img5;
@property (nonatomic, retain) IBOutlet UIImageView  *img6;
@property (nonatomic, retain) IBOutlet UIImageView  *img7;
@property (nonatomic, retain) IBOutlet UIImageView  *img8;
@property (nonatomic, retain) IBOutlet UIImageView  *img9;
@property (nonatomic, retain) IBOutlet UIImageView  *img10;
@property (nonatomic, retain) IBOutlet UIImageView  *img11;
@property (nonatomic, retain) IBOutlet UIImageView  *img12;
@property (nonatomic, retain) IBOutlet UIImageView  *img13;
@property (nonatomic, retain) IBOutlet UIImageView  *img14;
@property (nonatomic, retain) IBOutlet UIImageView  *img15;
@property (nonatomic, retain) IBOutlet UIImageView  *img16;
@property (nonatomic, retain) IBOutlet UIImageView  *img17;
@property (nonatomic, retain) IBOutlet UIImageView  *img18;
@property (nonatomic, retain) IBOutlet UIImageView  *img19;
@property (nonatomic, retain) IBOutlet UIImageView  *img20;
@property (nonatomic, retain) IBOutlet UIImageView  *img21;
@property (nonatomic, retain) IBOutlet UIImageView  *img22;
@property (nonatomic, retain) IBOutlet UIImageView  *img23;
@property (nonatomic, retain) IBOutlet UIImageView  *img24;
@property (nonatomic, retain) IBOutlet UIImageView  *img25;
@property (nonatomic, retain) IBOutlet UIImageView  *img26;
@property (nonatomic, retain) IBOutlet UIImageView  *img27;

@property (nonatomic, retain) UIAlertView       *alert;
@property (nonatomic, retain) UISegmentedControl    *segmentedControl;
@property (nonatomic, retain) UITableView           *msgTv;
@property (nonatomic, retain) STTweetLabel          *disMsgLab;
@property (nonatomic, retain) UILabel          *alertLab;
@property (nonatomic, retain) NSMutableArray *inforArray;
@property (nonatomic, retain) UIButton *logBtn;
@property (nonatomic, retain) UIButton *editBtn;
@property (nonatomic, retain) MBProgressHUD *HUD;
@property (nonatomic) BOOL isiPhone;
@property (nonatomic) BOOL rightCharacter;
@property (nonatomic) NSInteger toVoaid;
//@property (nonatomic) NSInteger nowPage;
//@property (nonatomic) NSInteger totalPage;
@end

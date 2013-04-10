//
//  StudyTime.h
//  VOA
//
//  Created by zhao song on 13-1-26.
//  Copyright (c) 2013年 buaa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "favdatabase.h"

@interface StudyTime : NSObject

@property (nonatomic) NSInteger timeId;
@property (nonatomic) NSInteger userId;
@property (nonatomic) NSInteger seconds;
@property (nonatomic, retain) NSString *date;
@property (nonatomic, retain) NSString *beginTime;
@property (nonatomic, retain) NSString *endTime;

- (id) initWithTimeId:(NSInteger) timeId userId:(NSInteger) userId seconds:(NSInteger) seconds date:(NSString *) date beginTime:(NSString *) beginTime endTime:(NSString *) endTime;

- (BOOL) insert;

+ (NSInteger) findLastId;

+ (NSInteger)avgStudyTime:(NSString *) date;

+ (NSInteger)findSecsByDate:(NSString *) date;
@end

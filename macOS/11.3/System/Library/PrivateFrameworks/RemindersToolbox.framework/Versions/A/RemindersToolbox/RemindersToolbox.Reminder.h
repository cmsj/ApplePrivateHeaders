/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemindersToolbox.framework/Versions/A/RemindersToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RemindersToolbox.Reminder : NSObject <NSSecureCoding> {

	 title;
	 isCompleted;
	 flagged;
	??? dueDate;
	 locationTrigger;
	 contactTrigger;
	 subtasks;

}

@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) long long hash; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

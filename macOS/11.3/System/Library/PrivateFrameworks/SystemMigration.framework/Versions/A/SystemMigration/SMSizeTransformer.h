/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class SMSizeFormatter;

@interface SMSizeTransformer : NSValueTransformer {

	SMSizeFormatter* sizeFormatter;
	long long textAlignment;

}

@property (retain) SMSizeFormatter * sizeFormatter; 
@property (assign) long long textAlignment; 
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(id)initWithPrefixStringID:(long long)arg1 localeIdentifier:(id)arg2 ;
-(id)initWithPrefixStringID:(long long)arg1 ;
-(SMSizeFormatter *)sizeFormatter;
-(void)setSizeFormatter:(SMSizeFormatter *)arg1 ;
@end


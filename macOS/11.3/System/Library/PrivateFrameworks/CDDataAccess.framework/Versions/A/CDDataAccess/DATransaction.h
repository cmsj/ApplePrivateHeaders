/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Versions/A/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATransaction : NSObject {

	NSString* _label;
	NSString* _transactionId;

}

@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * transactionId;              //@synthesize transactionId=_transactionId - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)transactionId;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSUUID, NSObject, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSObject*<OS_os_transaction> _transaction;
	long long _transactionCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
+(id)activeTransactions;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(char)isActive;
-(void)beginTransaction;
-(void)endTransaction;
-(void)endTransactionOnDate:(id)arg1 ;
@end


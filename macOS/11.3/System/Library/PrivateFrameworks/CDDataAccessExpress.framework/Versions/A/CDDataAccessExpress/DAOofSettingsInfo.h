/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/Versions/A/CDDataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CDDataAccessExpress/DAOofParams.h>

@protocol DAOofResponseDelegate;
@class NSString;

@interface DAOofSettingsInfo : DAOofParams {

	NSString* _requestID;
	id<DAOofResponseDelegate> _consumer;

}

@property (nonatomic,retain) NSString * requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic,__weak) id<DAOofResponseDelegate> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id<DAOofResponseDelegate>)consumer;
-(void)setConsumer:(id<DAOofResponseDelegate>)arg1 ;
@end


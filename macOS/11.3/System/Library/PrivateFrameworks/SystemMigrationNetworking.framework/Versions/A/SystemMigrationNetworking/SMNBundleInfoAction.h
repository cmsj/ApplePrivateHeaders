/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray;

@interface SMNBundleInfoAction : SMNAction {

	NSArray* _bundlePaths;

}

@property (retain) NSArray * bundlePaths;              //@synthesize bundlePaths=_bundlePaths - In the implementation block
+(int)actionID;
+(id)actionWithPayload:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)success;
-(id)resultData;
-(NSArray *)bundlePaths;
-(id)initWithBundlePaths:(id)arg1 ;
-(id)requestPayload;
-(char)returnsData;
-(char)setResultFromDict:(id)arg1 ;
-(id)setOfClassesToDecodeInTheResult;
-(void)setBundlePaths:(NSArray *)arg1 ;
@end


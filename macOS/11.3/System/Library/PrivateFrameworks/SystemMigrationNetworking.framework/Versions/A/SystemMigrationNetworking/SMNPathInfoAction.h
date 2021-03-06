/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray, NSSet;

@interface SMNPathInfoAction : SMNAction {

	NSArray* _paths;
	NSSet* _keys;

}

@property (retain) NSArray * paths;              //@synthesize paths=_paths - In the implementation block
@property (retain) NSSet * keys;                 //@synthesize keys=_keys - In the implementation block
+(int)actionID;
+(id)actionWithPayload:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSSet *)keys;
-(void)setKeys:(NSSet *)arg1 ;
-(char)success;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(id)resultData;
-(id)initWithPaths:(id)arg1 andKeys:(id)arg2 ;
-(id)requestPayload;
-(char)returnsData;
-(char)setResultFromDict:(id)arg1 ;
-(id)setOfClassesToDecodeInTheResult;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMUserFetching.h>

@protocol CRKClassKitRosterRequirements;
@interface CRKASMConcreteUserFetcher : NSObject <CRKASMUserFetching> {

	id<CRKClassKitRosterRequirements> _rosterRequirements;

}

@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> rosterRequirements;              //@synthesize rosterRequirements=_rosterRequirements - In the implementation block
-(id<CRKClassKitRosterRequirements>)rosterRequirements;
-(void)fetchASMUsersWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRosterRequirements:(id)arg1 ;
@end


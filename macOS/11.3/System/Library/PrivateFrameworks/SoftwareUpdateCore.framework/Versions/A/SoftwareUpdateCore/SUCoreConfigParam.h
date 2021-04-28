/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, MAAsset;

@interface SUCoreConfigParam : NSObject {

	NSError* _error;
	MAAsset* _locatedAsset;
	unsigned long long _operation;

}

@property (nonatomic,retain,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) MAAsset * locatedAsset;              //@synthesize locatedAsset=_locatedAsset - In the implementation block
@property (nonatomic,readonly) unsigned long long operation;               //@synthesize operation=_operation - In the implementation block
-(MAAsset *)locatedAsset;
-(id)initWithError:(id)arg1 operation:(unsigned long long)arg2 ;
-(id)initWithLocatedAsset:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(unsigned long long)operation;
@end

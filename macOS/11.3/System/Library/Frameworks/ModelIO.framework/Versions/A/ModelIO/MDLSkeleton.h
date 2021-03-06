/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MDLMatrix4x4Array;

@interface MDLSkeleton : MDLObject <NSCopying> {

	NSArray* _jointPaths;
	MDLMatrix4x4Array* _jointBindTransforms;
	MDLMatrix4x4Array* _jointRestTransforms;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                 //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointBindTransforms;              //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointRestTransforms;              //@synthesize jointRestTransforms=_jointRestTransforms - In the implementation block
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)jointPaths;
-(MDLMatrix4x4Array *)jointBindTransforms;
-(MDLMatrix4x4Array *)jointRestTransforms;
@end


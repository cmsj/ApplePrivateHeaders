/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint, NSString;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;
	NSString* _groupingIdentifier;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;              //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(PHFaceprint *)faceprint;
-(NSString *)groupingIdentifier;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(char)arg3 ;
@end


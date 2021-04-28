/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation {

	NSArray* _smartCamprints;
	NSString* _smartCamprintVersion;

}

@property (nonatomic,copy) NSArray * smartCamprints;                              //@synthesize smartCamprints=_smartCamprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * smartCamprintVersion;              //@synthesize smartCamprintVersion=_smartCamprintVersion - In the implementation block
+(char)supportsSecureCoding;
+(id)smartCamprintCurrentVersion;
+(id)observationWithSmartCamprints:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2 ;
-(NSArray *)smartCamprints;
-(void)setSmartCamprints:(NSArray *)arg1 ;
-(NSString *)smartCamprintVersion;
@end

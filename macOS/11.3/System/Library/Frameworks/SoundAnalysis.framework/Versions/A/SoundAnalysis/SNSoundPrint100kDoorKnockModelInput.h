/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDoorKnockModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _soundprint_Placeholder;

}

@property (nonatomic,retain) MLMultiArray * soundprint_Placeholder;              //@synthesize soundprint_Placeholder=_soundprint_Placeholder - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSoundprint_Placeholder:(id)arg1 ;
-(MLMultiArray *)soundprint_Placeholder;
-(void)setSoundprint_Placeholder:(MLMultiArray *)arg1 ;
@end


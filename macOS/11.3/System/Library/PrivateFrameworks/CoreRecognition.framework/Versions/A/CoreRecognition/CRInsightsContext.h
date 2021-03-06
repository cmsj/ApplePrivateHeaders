/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/Versions/A/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CRCameraReader;

@interface CRInsightsContext : NSObject {

	NSMutableDictionary* _info;
	CRCameraReader* _cameraReader;

}

@property (nonatomic,retain) NSMutableDictionary * info;                        //@synthesize info=_info - In the implementation block
@property (assign,nonatomic,__weak) CRCameraReader * cameraReader;              //@synthesize cameraReader=_cameraReader - In the implementation block
-(id)description;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSMutableDictionary *)info;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(CRCameraReader *)cameraReader;
-(void)setCameraReader:(CRCameraReader *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AESystemNotificationPrimitives, AEFileSystemPrimitives, AEObservation;
@class NSURL;

@interface AEAssessmentModeGestalt : NSObject {

	char _active;
	NSURL* _assessmentFileURL;
	id<AESystemNotificationPrimitives> _systemNotificationPrimitives;
	id<AEFileSystemPrimitives> _fileSystemPrimitives;
	id<AEObservation> _stateChangeNotificationObservation;

}

@property (nonatomic,readonly) NSURL * assessmentFileURL;                                                    //@synthesize assessmentFileURL=_assessmentFileURL - In the implementation block
@property (nonatomic,readonly) id<AESystemNotificationPrimitives> systemNotificationPrimitives;              //@synthesize systemNotificationPrimitives=_systemNotificationPrimitives - In the implementation block
@property (nonatomic,readonly) id<AEFileSystemPrimitives> fileSystemPrimitives;                              //@synthesize fileSystemPrimitives=_fileSystemPrimitives - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) id<AEObservation> stateChangeNotificationObservation;                           //@synthesize stateChangeNotificationObservation=_stateChangeNotificationObservation - In the implementation block
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)initWithQueue:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(id)initWithSystemNotificationPrimitives:(id)arg1 fileSystemPrimitives:(id)arg2 assessmentFileURL:(id)arg3 ;
-(id<AESystemNotificationPrimitives>)systemNotificationPrimitives;
-(void)setStateChangeNotificationObservation:(id<AEObservation>)arg1 ;
-(id<AEObservation>)stateChangeNotificationObservation;
-(id<AEFileSystemPrimitives>)fileSystemPrimitives;
-(NSURL *)assessmentFileURL;
@end

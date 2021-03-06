/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/Versions/A/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSProgress;

@interface MCResourceProgressObserver : NSObject {

	char _progressObserversSet;
	NSString* _name;
	NSProgress* _progress;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id cancelHandler;                     //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(id)cancelHandler;
-(id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end


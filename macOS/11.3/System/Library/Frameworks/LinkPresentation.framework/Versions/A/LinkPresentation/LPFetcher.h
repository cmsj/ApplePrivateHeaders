/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPEvent;

@interface LPFetcher : NSObject {

	unsigned _loggingID;
	LPEvent* _event;
	id _userData;

}

@property (nonatomic,readonly) unsigned _loggingID;              //@synthesize loggingID=_loggingID - In the implementation block
@property (nonatomic,retain) LPEvent * _event;                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) id userData;                        //@synthesize userData=_userData - In the implementation block
-(id)init;
-(id)userData;
-(void)cancel;
-(LPEvent *)_event;
-(void)setUserData:(id)arg1 ;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)_loggingID;
-(void)set_event:(LPEvent *)arg1 ;
@end


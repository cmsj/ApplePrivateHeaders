/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DESpeakableString : NSObject {

	SpeakableString* _This;

}

@property (assign) SpeakableString* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * print; 
@property (retain) NSString * speak; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(NSString *)print;
-(void)setPrint:(NSString *)arg1 ;
-(NSString *)speak;
-(void)setSpeak:(NSString *)arg1 ;
-(void)setThis:(SpeakableString*)arg1 ;
-(SpeakableString*)This;
-(id)initWithPrint:(id)arg1 speak:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <ScriptingBridge/SBObject.h>

@class NSString, _AMiCalDocument, NSNumber;

@interface _AMiCalWindow : SBObject

@property (copy) NSString * name; 
@property (assign) CGRect bounds; 
@property (copy,readonly) _AMiCalDocument * document; 
@property (readonly) char closeable; 
@property (readonly) char titled; 
@property (copy) NSNumber * index; 
@property (readonly) char floating; 
@property (readonly) char miniaturizable; 
@property (assign) char miniaturized; 
@property (readonly) char modal; 
@property (readonly) char resizable; 
@property (assign) char visible; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)index;
-(void)setIndex:(NSNumber *)arg1 ;
-(_AMiCalDocument *)document;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(char)titled;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(void)show;
-(char)zoomed;
-(char)miniaturized;
-(char)miniaturizable;
-(char)resizable;
-(char)zoomable;
-(char)floating;
-(void)delete;
-(char)exists;
-(id)id;
-(void)setZoomed:(char)arg1 ;
-(char)modal;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(id)arg2 ;
-(char)closeable;
-(void)setMiniaturized:(char)arg1 ;
@end

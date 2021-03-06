/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCObject.h>

@class MCAudioPlaylist, NSDictionary, MCPlug;

@interface MCContainer : MCObject {

	unsigned short mFlags;
	unsigned short mSpecialRetainCount;
	MCAudioPlaylist* mAudioPlaylist;
	NSDictionary* mInitialState;
	MCPlug* mReferencingPlug;

}

@property (readonly) MCAudioPlaylist * audioPlaylist; 
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded; 
@property (readonly) MCPlug * referencingPlug; 
@property (retain) NSDictionary * initialState; 
-(void)dealloc;
-(id)init;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(id)xmlElement;
-(id)imprint;
-(MCAudioPlaylist *)audioPlaylist;
-(void)demolish;
-(MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
-(void)specialRelease;
-(id)specialRetain;
-(MCPlug *)referencingPlug;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)referenceByPlug:(id)arg1 ;
-(void)unreferenceByPlug:(id)arg1 ;
@end


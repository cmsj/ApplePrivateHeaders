/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSCollectionViewItem.h>

@class NSButton, ResponsiveDesignPresetConfiguration;

@interface ResponsiveDesignPresetCollectionViewItem : NSCollectionViewItem

@property (nonatomic,retain) NSButton * button; 
@property (nonatomic,readonly) ResponsiveDesignPresetConfiguration * presetConfiguration; 
+(id)keyPathsForValuesAffectingPresetConfiguration;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)viewDidLoad;
-(CGSize)preferredContentSize;
-(void)setSelected:(char)arg1 ;
-(NSButton *)button;
-(void)_buttonClicked:(id)arg1 ;
-(ResponsiveDesignPresetConfiguration *)presetConfiguration;
-(id)_landscapeImage;
-(id)_portraitImage;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideBase.h>

@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {

	char mShowMasterPlaceholderAnimations;
	char mShowMasterShapes;
	OADThemeOverrides* mThemeOverrides;
	OADColorMap* mColorMapOverride;

}
-(id)description;
-(id)init;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(char)showMasterShapes;
-(id)drawingTheme;
-(id)themeOverrides;
-(void)doneWithContent;
-(void)setColorMapOverride:(id)arg1 ;
-(void)setShowMasterShapes:(char)arg1 ;
-(id)defaultTextListStyle;
-(id)colorMapOverride;
-(char)showMasterPlaceholderAnimations;
-(void)setShowMasterPlaceholderAnimations:(char)arg1 ;
@end

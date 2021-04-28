/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKDocumentCanvas.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface OKDocumentPage : OKDocumentCanvas {

	NSString* _templateName;
	NSString* _internalNavigatorName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSMutableArray* _internalWidgets;
	NSString* _navigatorName;
	NSMutableArray* _widgets;

}

@property (nonatomic,copy) NSString * navigatorName;                       //@synthesize navigatorName=_navigatorName - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * widgets;              //@synthesize widgets=_widgets - In the implementation block
+(id)pageWithName:(id)arg1 templateName:(id)arg2 navigatorName:(id)arg3 settings:(id)arg4 properties:(id)arg5 userData:(id)arg6 widgets:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(NSMutableArray *)widgets;
-(void)resolveIfNeeded;
-(id)navigator;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forDocument:(id)arg3 andParent:(id)arg4 ;
-(void)setNavigatorName:(NSString *)arg1 ;
-(id)widgetWithName:(id)arg1 ;
-(NSString *)navigatorName;
-(id)parentNavigator;
-(id)pageTemplate;
@end

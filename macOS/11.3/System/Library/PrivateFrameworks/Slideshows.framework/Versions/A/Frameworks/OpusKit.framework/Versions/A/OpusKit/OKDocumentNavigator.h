/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKDocumentCanvas.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKDocumentNavigator : OKDocumentCanvas {

	NSString* _className;
	NSMutableArray* _pagesNames;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;

}

@property (nonatomic,copy) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * pagesNames;              //@synthesize pagesNames=_pagesNames - In the implementation block
+(id)navigatorWithName:(id)arg1 className:(id)arg2 pagesNames:(id)arg3 settings:(id)arg4 userData:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)pages;
-(void)resolveIfNeeded;
-(NSMutableArray *)pagesNames;
-(id)pageWithName:(id)arg1 ;
-(id)parentPage;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forDocument:(id)arg3 andParent:(id)arg4 ;
@end


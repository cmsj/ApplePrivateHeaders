/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSStyles.framework/Versions/A/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSStyles/TSKStyleMapper.h>

@class TSSStylesheet, TSURetainedPointerKeyDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface TSSStyleMapper : NSObject <TSKStyleMapper> {

	TSSStylesheet* _targetStylesheet;
	TSURetainedPointerKeyDictionary* _styleMap;
	NSMutableArray* _mappingContext;
	NSMutableSet* _createdStyles;
	char _forceMatchStyle;
	char _clientsMustRemap;

}

@property (nonatomic,readonly) TSSStylesheet * targetStylesheet; 
@property (nonatomic,readonly) NSSet * createdStyles;                         //@synthesize createdStyles=_createdStyles - In the implementation block
@property (assign,nonatomic) char clientsMustRemap;                           //@synthesize clientsMustRemap=_clientsMustRemap - In the implementation block
@property (assign,nonatomic) char forceMatchStyle;                            //@synthesize forceMatchStyle=_forceMatchStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2 ;
-(id)mappedStyleForStyle:(id)arg1 ;
-(TSSStylesheet *)targetStylesheet;
-(void)pushMappingContext:(id)arg1 ;
-(void)popMappingContext:(id)arg1 ;
-(char)forceMatchStyle;
-(void)setForceMatchStyle:(char)arg1 ;
-(void)setClientsMustRemap:(char)arg1 ;
-(id)initWithTargetStylesheet:(id)arg1 ;
-(id)targetParentByIdentifierExactMatchForStyle:(id)arg1 ;
-(id)targetParentByNameMatchForStyle:(id)arg1 ;
-(id)targetParentByContentTagMatchForStyle:(id)arg1 ;
-(id)targetParentByPropertyMapMatchForUnidentifiedStyle:(id)arg1 ;
-(id)targetParentForStyle:(id)arg1 ;
-(id)stylesheetForNewRootStyleFromStyle:(id)arg1 ;
-(char)shouldMapParentOfStyle:(id)arg1 ;
-(char)clientsMustRemap;
-(id)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(id)arg1 ;
-(id)createRootStyleForStyle:(id)arg1 withPropertyMap:(id)arg2 ;
-(NSSet *)createdStyles;
@end


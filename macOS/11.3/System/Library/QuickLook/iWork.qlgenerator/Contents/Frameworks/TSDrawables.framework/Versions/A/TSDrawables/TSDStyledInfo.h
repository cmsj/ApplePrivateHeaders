/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDDrawableInfo.h>
#import <TSDrawables/TSDStyleOwning.h>
#import <TSDrawables/TSSStyleClient.h>

@class TSSStyle, NSSet, TSDReflection, TSDShadow, TSDStroke, NSString, NSArray;

@interface TSDStyledInfo : TSDDrawableInfo <TSDStyleOwning, TSSStyleClient>

@property (nonatomic,copy) TSDReflection * reflection; 
@property (nonatomic,copy) TSDShadow * shadow; 
@property (nonatomic,copy) TSDStroke * stroke; 
@property (assign,nonatomic) float opacity; 
@property (nonatomic,readonly) char pathIsOpen; 
@property (nonatomic,readonly) char supportsStyleInspecting; 
@property (nonatomic,readonly) NSString * styleIdentifierTemplateForNewPreset; 
@property (nonatomic,readonly) NSArray * stylesForCopyStyle; 
@property (nonatomic,retain) TSSStyle * style; 
@property (nonatomic,readonly) Class styleClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * referencedStyles; 
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(TSSStyle *)style;
-(TSDReflection *)reflection;
-(void)setStyle:(TSSStyle *)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(TSDStroke *)stroke;
-(char)isSelectable;
-(TSDShadow *)shadow;
-(void)setShadow:(TSDShadow *)arg1 ;
-(float)opacity;
-(void)setStroke:(TSDStroke *)arg1 ;
-(void)setReflection:(TSDReflection *)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(id)boxedValueForProperty:(int)arg1 ;
-(NSSet *)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)i_setValue:(id)arg1 forProperty:(int)arg2 ;
-(Class)styleClass;
-(char)pathIsOpen;
-(NSArray *)stylesForCopyStyle;
-(id)propertyMapForNewPreset;
-(NSString *)styleIdentifierTemplateForNewPreset;
-(char)supportsStyleInspecting;
@end


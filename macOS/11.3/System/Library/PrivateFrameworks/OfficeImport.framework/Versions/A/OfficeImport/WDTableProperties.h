/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTablePropertiesValues, WDDocument;

@interface WDTableProperties : NSObject <NSCopying> {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDTablePropertiesValues* mOriginalProperties;
	WDTablePropertiesValues* mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(void)setWidth:(long long)arg1 ;
-(long long)width;
-(int)alignment;
-(WDDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(short)cellSpacing;
-(int)deleted;
-(char)biDirectional;
-(void)setBiDirectional:(char)arg1 ;
-(void)setEdited:(int)arg1 ;
-(void)setDeleted:(int)arg1 ;
-(int)edited;
-(id)topBorder;
-(id)bottomBorder;
-(void)setCellSpacing:(short)arg1 ;
-(char)isDeletedOverridden;
-(char)isBaseStyleOverridden;
-(id)baseStyle;
-(char)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(char)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(char)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(char)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(char)isJustificationOverridden;
-(int)justification;
-(char)isShadingOverridden;
-(id)shading;
-(char)isBottomBorderOverridden;
-(char)isWidthOverridden;
-(char)isTopBorderOverridden;
-(char)isLeftBorderOverridden;
-(char)isRightBorderOverridden;
-(id)leftBorder;
-(id)rightBorder;
-(char)isLeftDistanceFromTextOverridden;
-(long long)leftDistanceFromText;
-(char)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(char)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(void)setIndent:(short)arg1 ;
-(short)indent;
-(char)isIndentOverridden;
-(char)isAlignmentOverridden;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(char)isFormattingChangedOverridden;
-(int)formattingChanged;
-(char)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(char)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(char)isTableFloating;
-(void)clearShading;
-(id)mutableShading;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(void)setBaseStyle:(id)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setWidthType:(int)arg1 ;
-(void)setIndentType:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(void)setLeftDistanceFromText:(long long)arg1 ;
-(void)setTopDistanceFromText:(long long)arg1 ;
-(void)setRightDistanceFromText:(long long)arg1 ;
-(void)setBottomDistanceFromText:(long long)arg1 ;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(id)deletionDate;
-(void)setDeletionDate:(id)arg1 ;
-(id)editDate;
-(void)setEditDate:(id)arg1 ;
-(char)isEditedOverridden;
-(char)isIndexToAuthorIDOfDeletionOverridden;
-(char)isIndexToAuthorIDOfEditOverridden;
-(char)isDeletionDateOverridden;
-(char)isEditDateOverridden;
-(int)widthType;
-(char)isWidthTypeOverridden;
-(unsigned short)look;
-(void)setLook:(unsigned short)arg1 ;
-(int)indentType;
-(int)cellSpacingType;
-(void)setCellSpacingType:(int)arg1 ;
-(long long)topDistanceFromText;
-(long long)rightDistanceFromText;
-(long long)bottomDistanceFromText;
-(char)isLookOverridden;
-(void)clearTopBorder;
-(void)clearLeftBorder;
-(void)clearBottomBorder;
-(void)clearRightBorder;
-(void)clearInsideHorizontalBorder;
-(void)clearInsideVerticalBorder;
-(char)isIndentTypeOverridden;
-(char)isCellSpacingOverridden;
-(char)isCellSpacingTypeOverridden;
-(char)isTopDistanceFromTextOverridden;
-(char)isRightDistanceFromTextOverridden;
-(char)isBottomDistanceFromTextOverridden;
-(char)isBiDirectionalOverridden;
-(void)moveOrignalToTracked;
@end


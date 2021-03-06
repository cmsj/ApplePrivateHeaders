/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/Versions/A/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIFlowArrangementContainer.h>

@class NSString;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {

	NUIFlowArrangement* _arrangement;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
	}  _flowFlags;

}

@property (assign,nonatomic) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (nonatomic,readonly) long long horizontalDistribution; 
@property (nonatomic,readonly) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerFlowViewWithArrangedSubviews:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfColumns;
-(void)setRowSpacing:(double)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(double)rowSpacing;
-(double)columnSpacing;
-(long long)verticalAlignment;
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)horizontalAlignment;
-(void)setBaselineRelativeArrangement:(char)arg1 ;
-(char)isLayoutSizeDependentOnPerpendicularAxis;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(char)setNeedsInvalidation:(long long)arg1 ;
-(id)arrangedDescription;
-(id)debugDictionary;
-(long long)horizontalDistribution;
-(long long)verticalDistribution;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(void)populateFlowArrangementCells:(vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell>>*)arg1 ;
@end


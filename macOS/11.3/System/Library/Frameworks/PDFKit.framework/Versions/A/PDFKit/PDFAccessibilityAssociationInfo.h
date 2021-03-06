/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAccessibilityNode;

@interface PDFAccessibilityAssociationInfo : NSObject {

	PDFAccessibilityNode* _annotationNode;
	PDFAccessibilityNode* _parentNode;
	PDFAccessibilityNode* _firstChoiceAssociationNode;
	PDFAccessibilityNode* _secondChoiceAssociationNode;
	double _bestDistance;
	double _secondBestDistance;
	unsigned long long _firstChoiceAssociationPosition;
	unsigned long long _secondChoiceAssociationPosition;

}

@property (assign,nonatomic,__weak) PDFAccessibilityNode * annotationNode;                           //@synthesize annotationNode=_annotationNode - In the implementation block
@property (assign,nonatomic,__weak) PDFAccessibilityNode * parentNode;                               //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic,__weak) PDFAccessibilityNode * firstChoiceAssociationNode;               //@synthesize firstChoiceAssociationNode=_firstChoiceAssociationNode - In the implementation block
@property (assign,nonatomic,__weak) PDFAccessibilityNode * secondChoiceAssociationNode;              //@synthesize secondChoiceAssociationNode=_secondChoiceAssociationNode - In the implementation block
@property (assign,nonatomic) double bestDistance;                                                    //@synthesize bestDistance=_bestDistance - In the implementation block
@property (assign,nonatomic) double secondBestDistance;                                              //@synthesize secondBestDistance=_secondBestDistance - In the implementation block
@property (assign,nonatomic) unsigned long long firstChoiceAssociationPosition;                      //@synthesize firstChoiceAssociationPosition=_firstChoiceAssociationPosition - In the implementation block
@property (assign,nonatomic) unsigned long long secondChoiceAssociationPosition;                     //@synthesize secondChoiceAssociationPosition=_secondChoiceAssociationPosition - In the implementation block
-(id)init;
-(PDFAccessibilityNode *)parentNode;
-(void)setParentNode:(PDFAccessibilityNode *)arg1 ;
-(void)setAnnotationNode:(PDFAccessibilityNode *)arg1 ;
-(PDFAccessibilityNode *)firstChoiceAssociationNode;
-(unsigned long long)firstChoiceAssociationPosition;
-(unsigned long long)secondChoiceAssociationPosition;
-(PDFAccessibilityNode *)secondChoiceAssociationNode;
-(PDFAccessibilityNode *)annotationNode;
-(void)setFirstChoiceAssociationNode:(PDFAccessibilityNode *)arg1 ;
-(void)setSecondChoiceAssociationNode:(PDFAccessibilityNode *)arg1 ;
-(double)bestDistance;
-(void)setBestDistance:(double)arg1 ;
-(double)secondBestDistance;
-(void)setSecondBestDistance:(double)arg1 ;
-(void)setFirstChoiceAssociationPosition:(unsigned long long)arg1 ;
-(void)setSecondChoiceAssociationPosition:(unsigned long long)arg1 ;
@end


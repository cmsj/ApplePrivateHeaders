/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DistributionKit/DistributionKit-Structs.h>
@class PKDistributionController, PKDistributionChoiceItem, NSMutableDictionary, NSString, NSDictionary, IFDCustomizationItem, IFDTarget, IFDocument, IFSearchContext;

@interface IFJS_Context : NSObject {

	PKDistributionController* distributionController;
	PKDistributionChoiceItem* choiceItem;
	NSMutableDictionary* result;
	NSString* destinationPath;
	char allowInsecure;
	NSDictionary* systemVersionToBeInstalled;
	NSDictionary* evaluatorMetaInfo;
	char legacySystemVersion;
	IFDCustomizationItem* currentChoice;
	id choicesDelegate;
	IFDTarget* target;
	char targetContentIgnored;
	IFDocument* document;
	CFBundleRef currentBundle;
	NSString* distributionScriptsPath;
	IFSearchContext* searchContext;

}

@property (__weak) PKDistributionController * distributionController; 
@property (__weak) PKDistributionChoiceItem * choiceItem; 
@property (retain) NSMutableDictionary * result; 
@property (retain) NSString * destinationPath; 
@property (assign) char allowInsecure; 
@property (retain) NSDictionary * systemVersionToBeInstalled; 
@property (retain) NSDictionary * evaluatorMetaInfo; 
@property (assign) char legacySystemVersion; 
@property (assign) IFDCustomizationItem * currentChoice; 
@property (assign) id choicesDelegate; 
@property (assign) IFDTarget * target; 
@property (assign) char targetContentIgnored; 
@property (assign) IFDocument * document; 
@property (assign) CFBundleRef currentBundle; 
@property (retain) NSString * distributionScriptsPath; 
@property (assign) IFSearchContext * searchContext; 
-(void)dealloc;
-(void)setTarget:(IFDTarget *)arg1 ;
-(IFDTarget *)target;
-(NSMutableDictionary *)result;
-(void)setResult:(NSMutableDictionary *)arg1 ;
-(IFDocument *)document;
-(void)setDocument:(IFDocument *)arg1 ;
-(IFSearchContext *)searchContext;
-(void)setSearchContext:(IFSearchContext *)arg1 ;
-(NSString *)destinationPath;
-(void)setDestinationPath:(NSString *)arg1 ;
-(CFBundleRef)currentBundle;
-(NSDictionary *)evaluatorMetaInfo;
-(void)setSystemVersionToBeInstalled:(NSDictionary *)arg1 ;
-(void)setCurrentBundle:(CFBundleRef)arg1 ;
-(PKDistributionController *)distributionController;
-(void)setDistributionController:(PKDistributionController *)arg1 ;
-(PKDistributionChoiceItem *)choiceItem;
-(void)setChoiceItem:(PKDistributionChoiceItem *)arg1 ;
-(char)allowInsecure;
-(void)setAllowInsecure:(char)arg1 ;
-(NSDictionary *)systemVersionToBeInstalled;
-(void)setEvaluatorMetaInfo:(NSDictionary *)arg1 ;
-(char)legacySystemVersion;
-(void)setLegacySystemVersion:(char)arg1 ;
-(IFDCustomizationItem *)currentChoice;
-(void)setCurrentChoice:(IFDCustomizationItem *)arg1 ;
-(id)choicesDelegate;
-(void)setChoicesDelegate:(id)arg1 ;
-(char)targetContentIgnored;
-(void)setTargetContentIgnored:(char)arg1 ;
-(NSString *)distributionScriptsPath;
-(void)setDistributionScriptsPath:(NSString *)arg1 ;
@end


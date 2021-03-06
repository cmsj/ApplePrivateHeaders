/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKDistribution, PKDistributionController, PKDistributionChoice;

@interface OSSUUpdate : NSObject {

	NSString* _productKey;
	PKDistribution* __distribution;
	PKDistributionController* __distributionController;
	PKDistributionChoice* __choice;
	NSString* __baseDisplayName;
	NSString* __displayName;
	NSString* __displayVersion;
	NSString* __longDescription;

}

@property (nonatomic,retain) PKDistribution * _distribution;                                  //@synthesize _distribution=__distribution - In the implementation block
@property (nonatomic,retain) PKDistributionController * _distributionController;              //@synthesize _distributionController=__distributionController - In the implementation block
@property (nonatomic,retain) PKDistributionChoice * _choice;                                  //@synthesize _choice=__choice - In the implementation block
@property (nonatomic,retain) NSString * _baseDisplayName;                                     //@synthesize _baseDisplayName=__baseDisplayName - In the implementation block
@property (nonatomic,retain) NSString * _displayName;                                         //@synthesize _displayName=__displayName - In the implementation block
@property (nonatomic,retain) NSString * _displayVersion;                                      //@synthesize _displayVersion=__displayVersion - In the implementation block
@property (nonatomic,retain) NSString * _longDescription;                                     //@synthesize _longDescription=__longDescription - In the implementation block
@property (nonatomic,readonly) NSString * productKey;                                         //@synthesize productKey=_productKey - In the implementation block
-(NSString *)_displayName;
-(PKDistribution *)_distribution;
-(NSString *)_longDescription;
-(NSString *)productKey;
-(NSString *)_displayVersion;
-(void)set_distribution:(PKDistribution *)arg1 ;
-(void)set_distributionController:(PKDistributionController *)arg1 ;
-(void)set_choice:(PKDistributionChoice *)arg1 ;
-(PKDistributionController *)_distributionController;
-(PKDistributionChoice *)_choice;
-(void)set_baseDisplayName:(NSString *)arg1 ;
-(void)set_displayVersion:(NSString *)arg1 ;
-(void)set_longDescription:(NSString *)arg1 ;
-(NSString *)_baseDisplayName;
-(void)set_displayName:(NSString *)arg1 ;
-(id)_descriptionDataReturningMIMEType:(id*)arg1 ;
-(id)_attributedStringToHTMLString:(id)arg1 ;
-(id)journalEntry;
-(id)initWithProductKey:(id)arg1 withDistribution:(id)arg2 withDistributionController:(id)arg3 ;
-(void)setTargetJournalPath:(id)arg1 ;
-(void)insertIntoJournal;
@end


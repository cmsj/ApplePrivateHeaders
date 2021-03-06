/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray, NSMutableArray, NSSet, NSError, NSString, NSAttributedString;

@interface _NSMenuContext : NSObject {

	id _requestor;
	NSArray* _sendTypes;
	NSMutableArray* _requestorInfos;
	NSArray* _fileURLsToCheck;
	NSSet* _preloadedUTIsOfFileURLsToCheck;
	NSError* _errorLoadingUTIs;
	NSString* _stringToCheck;
	NSRange _rangeOfStringToCheck;
	NSAttributedString* _attrStringToCheck;
	NSRange _rangeOfAttrStringToCheck;
	NSArray* _carbonCopyUTIs;
	NSArray* _carbonPasteUTIs;
	unsigned long long _duplicateServicesMask;
	NSString* _presentationMode;
	unsigned long long _source;
	struct {
		unsigned requiresSelection : 1;
		unsigned inspectsSelectionText : 1;
		unsigned allowsAllWhitespaceText : 1;
		unsigned checkedForString : 1;
		unsigned checkedForAttrString : 1;
		unsigned checkedForURLs : 1;
		unsigned checkedForWhitespace : 1;
		unsigned isAllWhitespace : 1;
		unsigned reserved : 24;
	}  _flags;

}

@property (assign,nonatomic) unsigned long long duplicateServicesMask;              //@synthesize duplicateServicesMask=_duplicateServicesMask - In the implementation block
@property (assign,nonatomic) char allowsAllWhitespaceText; 
@property (assign,nonatomic) char inspectsSelectionText; 
@property (assign,nonatomic) char requiresSelection; 
-(void)dealloc;
-(id)initForServicePresentationMode:(id)arg1 withRequestorChain:(id)arg2 ;
-(void)setInspectsSelectionText:(char)arg1 ;
-(char)qualifyEntries:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDuplicateServicesMask:(unsigned long long)arg1 ;
-(void)setRequiresSelection:(char)arg1 ;
-(void)setAllowsAllWhitespaceText:(char)arg1 ;
-(id)requestorProvidingType:(id)arg1 ;
-(id)getObjectsOfClass:(Class)arg1 fromRequestorProvidingType:(id)arg2 options:(id)arg3 ;
-(char)determineSelectedStringForApplyingFiltersDirectlyFromRequestorSupplyingType:(id)arg1 attributed:(char)arg2 ;
-(char)determineSelectedStringForApplyingFiltersViaPasteboardFromRequestorSupplyingType:(id)arg1 attributed:(char)arg2 ;
-(id)_selectedStringAndRangeForApplyingFilters:(NSRange*)arg1 attributed:(char)arg2 ;
-(char)_stringContainsFilePath:(id)arg1 inRange:(NSRange)arg2 ;
-(void)moveQualifiedEntries:(id)arg1 approvedEntries:(id)arg2 havingRunFilters:(unsigned long long)arg3 ;
-(void)filterEntriesByBundleID:(id)arg1 ;
-(void)filterEntriesByMenuLocation:(id)arg1 ;
-(void)filterEntriesByAvailableInputSources:(id)arg1 ;
-(char)_sendTypesContainsTextTypeAppropriateForFiltering;
-(void)reportNoTextForTrackingFiltersThatRequireText:(id)arg1 ;
-(void)filterEntriesByFilePath:(id)arg1 ;
-(void)filterEntriesByCharacterLimit:(id)arg1 ;
-(void)filterEntriesByWordLimit:(id)arg1 ;
-(void)filterEntriesByWidthForm:(id)arg1 ;
-(void)filterEntriesByRadar:(id)arg1 ;
-(void)filterEntriesByScript:(id)arg1 ;
-(void)filterEntriesByLanguage:(id)arg1 ;
-(void)filterEntriesByTextTransformations:(id)arg1 ;
-(void)filterEntriesByDataDetectors:(id)arg1 ;
-(void)filterEntriesByLinkDetection:(id)arg1 ;
-(char)_selectionExistsAndIsAllWhitespace;
-(id)_selectedURLsForApplyingFilters;
-(id)infoForRequestor:(id)arg1 ;
-(char)serviceEntryIsActiveInThisContext:(id)arg1 ;
-(char)serviceEntryTypesConformToCarbonPasteboardTypes:(id)arg1 ;
-(void)filterEntriesWithRequestorBySupportedSendAndReceiveTypes:(id)arg1 returningSendTypesIntoArray:(id)arg2 returningEntriesNeedingURLTypecheckingIntoSet:(id)arg3 ;
-(void)filterEntriesWithCarbonPasteboardTypesBySupportedSendAndReceiveTypes:(id)arg1 returningSendTypesIntoArray:(id)arg2 ;
-(void)filterEntriesByDuplicates:(id)arg1 ;
-(void)filterEntriesByRemovingItemsWithNoSendOrReceiveTypes:(id)arg1 ;
-(void)filterEntriesByRemovingItemsThatUseSelectionIfItIsWhitespace:(id)arg1 ;
-(void)filterEntriesByRemovingItemsThatDoNotUseSelection:(id)arg1 ;
-(void)filterEntriesByTheirFilters:(id)arg1 ;
-(id)utisForURLs:(id)arg1 error:(id*)arg2 ;
-(void)_preconcurrentPortionOfQualifyEntries:(id)arg1 returningEntriesNeedingURLTypecheckingIntoSet:(id)arg2 ;
-(void)filterEntriesByUnmatchedFileTypes:(id)arg1 entriesNeedingURLTypechecking:(id)arg2 ;
-(char)_concurrentPortionOfQualifyEntriesWithEntriesNeedingURLTypechecking:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initForCarbonServicesMenuWithCopyUTIs:(id)arg1 pasteUTIs:(id)arg2 ;
-(char)requiresSelection;
-(char)inspectsSelectionText;
-(char)allowsAllWhitespaceText;
-(unsigned long long)duplicateServicesMask;
@end


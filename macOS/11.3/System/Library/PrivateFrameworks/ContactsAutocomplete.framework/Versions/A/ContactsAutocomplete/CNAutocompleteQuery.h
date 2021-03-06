/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNScheduler, CNAutocompleteSearchProvider, CNAutocompleteProbeProvider, CNCancelable, CNAutocompleteSourceInclusionPolicy;
@class CNAutocompleteFetchRequest, CNAutocompleteDelegateWrapper, CNCancelationToken, CNAutocompleteUserSession, NSString;

@interface CNAutocompleteQuery : NSObject <CNCancelable> {

	CNAutocompleteFetchRequest* _request;
	CNAutocompleteDelegateWrapper* _delegate;
	id<CNScheduler> _scheduler;
	CNCancelationToken* _cancelationToken;
	id<CNAutocompleteSearchProvider> _searchProvider;
	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteUserSession* _userSession;
	id<CNCancelable> _delegateToken;
	id<CNAutocompleteSourceInclusionPolicy> _sourceInclusionPolicy;

}

@property (copy) CNAutocompleteFetchRequest * request;                                         //@synthesize request=_request - In the implementation block
@property (retain) id<CNAutocompleteSearchProvider> searchProvider;                            //@synthesize searchProvider=_searchProvider - In the implementation block
@property (retain) CNAutocompleteDelegateWrapper * delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<CNScheduler> scheduler;                                                  //@synthesize scheduler=_scheduler - In the implementation block
@property (retain) id<CNAutocompleteProbeProvider> probeProvider;                              //@synthesize probeProvider=_probeProvider - In the implementation block
@property (retain) CNAutocompleteUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (retain) CNCancelationToken * cancelationToken;                                      //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (__weak) id<CNCancelable> delegateToken;                                             //@synthesize delegateToken=_delegateToken - In the implementation block
@property (retain) id<CNAutocompleteSourceInclusionPolicy> sourceInclusionPolicy;              //@synthesize sourceInclusionPolicy=_sourceInclusionPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldSortResultsForPolicy:(id)arg1 ;
+(char)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg1 ;
+(char)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)arg1 ;
+(id)observableForQuery:(id)arg1 context:(id)arg2 ;
+(char)shouldPerformQueryForRequest:(id)arg1 ;
+(void)configureNetworkForBuilder:(id)arg1 query:(id)arg2 ;
+(id)observableWithSupplementalResultsForQuery:(id)arg1 ;
+(void)configureNetworkPolicyForBuilder:(id)arg1 query:(id)arg2 ;
+(void)configureNetworkActivityHandlersForBuilder:(id)arg1 query:(id)arg2 ;
+(id)queryWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7 ;
-(CNAutocompleteDelegateWrapper *)delegate;
-(void)setDelegate:(CNAutocompleteDelegateWrapper *)arg1 ;
-(void)cancel;
-(CNAutocompleteFetchRequest *)request;
-(id)execute;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(void)setUserSession:(CNAutocompleteUserSession *)arg1 ;
-(CNAutocompleteUserSession *)userSession;
-(id<CNScheduler>)scheduler;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(CNCancelationToken *)cancelationToken;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(id)initWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7 ;
-(id)makeDelegateWrapperWithDelegate:(id)arg1 forRequest:(id)arg2 sourceInclusionPolicy:(id)arg3 userSession:(id)arg4 ;
-(id)executeWithContext:(id)arg1 ;
-(void)searchOperationReportedResults:(id)arg1 ;
-(void)searchOperationsHaveFinished;
-(void)searchOperationEncounteredError:(id)arg1 ;
-(id<CNAutocompleteSourceInclusionPolicy>)sourceInclusionPolicy;
-(void)searchOperationsHaveBegunNetworkActivity;
-(void)searchOperationsHaveEndedNetworkActivity;
-(id<CNCancelable>)delegateToken;
-(void)setCancelationToken:(CNCancelationToken *)arg1 ;
-(void)setSearchProvider:(id<CNAutocompleteSearchProvider>)arg1 ;
-(void)setProbeProvider:(id<CNAutocompleteProbeProvider>)arg1 ;
-(void)setDelegateToken:(id<CNCancelable>)arg1 ;
-(void)setSourceInclusionPolicy:(id<CNAutocompleteSourceInclusionPolicy>)arg1 ;
@end


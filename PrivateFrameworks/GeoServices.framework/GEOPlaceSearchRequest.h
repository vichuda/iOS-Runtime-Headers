/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEOSearchSubstring, NSMutableArray, GEOMapRegion, NSString, GEOAddress, GEOSessionID;

@interface GEOPlaceSearchRequest : PBRequest  {
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _placeIDs;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _businessIDs;
    GEOAddress *_address;
    GEOLocation *_location;
    NSString *_search;
    GEOMapRegion *_mapRegion;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _includeAdditionalPlaceTypes;
    BOOL _hasIncludePhonetics;
    BOOL _includePhonetics;
    BOOL _hasMaxResults;
    int _maxResults;
    BOOL _hasResultOffset;
    int _resultOffset;
    BOOL _hasSessionID;
    int _sessionID;
    GEOSessionID *_sessionGUID;
    BOOL _hasBusinessSortOrder;
    int _businessSortOrder;
    BOOL _hasIncludeBusinessRating;
    BOOL _includeBusinessRating;
    BOOL _hasIncludeBusinessCategories;
    BOOL _includeBusinessCategories;
    BOOL _hasMaxBusinessReviews;
    int _maxBusinessReviews;
    NSMutableArray *_filterByBusinessCategorys;
    BOOL _hasIsStrictMapRegion;
    BOOL _isStrictMapRegion;
    BOOL _hasGeoId;
    long long _geoId;
    BOOL _hasIncludeQuads;
    BOOL _includeQuads;
    BOOL _hasExcludeAddressInResults;
    BOOL _excludeAddressInResults;
    NSMutableArray *_searchSubstrings;
    BOOL _hasIncludeGeoId;
    BOOL _includeGeoId;
    NSString *_searchContext;
    GEOSearchSubstring *_searchContextSubstring;
}

@property(readonly) unsigned int placeIDsCount;
@property(readonly) long long* placeIDs;
@property(readonly) unsigned int businessIDsCount;
@property(readonly) long long* businessIDs;
@property(readonly) BOOL hasAddress;
@property(retain) GEOAddress * address;
@property(readonly) BOOL hasLocation;
@property(retain) GEOLocation * location;
@property(readonly) BOOL hasSearch;
@property(retain) NSString * search;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) unsigned int includeAdditionalPlaceTypesCount;
@property(readonly) int* includeAdditionalPlaceTypes;
@property BOOL hasIncludePhonetics;
@property BOOL includePhonetics;
@property BOOL hasMaxResults;
@property int maxResults;
@property BOOL hasResultOffset;
@property int resultOffset;
@property BOOL hasSessionID;
@property int sessionID;
@property(readonly) BOOL hasSessionGUID;
@property(retain) GEOSessionID * sessionGUID;
@property BOOL hasBusinessSortOrder;
@property int businessSortOrder;
@property BOOL hasIncludeBusinessRating;
@property BOOL includeBusinessRating;
@property BOOL hasIncludeBusinessCategories;
@property BOOL includeBusinessCategories;
@property BOOL hasMaxBusinessReviews;
@property int maxBusinessReviews;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property BOOL hasIsStrictMapRegion;
@property BOOL isStrictMapRegion;
@property BOOL hasGeoId;
@property long long geoId;
@property BOOL hasIncludeQuads;
@property BOOL includeQuads;
@property BOOL hasExcludeAddressInResults;
@property BOOL excludeAddressInResults;
@property(retain) NSMutableArray * searchSubstrings;
@property BOOL hasIncludeGeoId;
@property BOOL includeGeoId;
@property(readonly) BOOL hasSearchContext;
@property(retain) NSString * searchContext;
@property(readonly) BOOL hasSearchContextSubstring;
@property(retain) GEOSearchSubstring * searchContextSubstring;


- (id)description;
- (void)dealloc;
- (id)searchContextSubstring;
- (BOOL)includeGeoId;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (BOOL)hasIncludeGeoId;
- (id)searchSubstrings;
- (BOOL)excludeAddressInResults;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (BOOL)hasExcludeAddressInResults;
- (BOOL)includeQuads;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (BOOL)hasIncludeQuads;
- (BOOL)isStrictMapRegion;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (BOOL)hasIsStrictMapRegion;
- (id)filterByBusinessCategorys;
- (int)maxBusinessReviews;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (BOOL)hasMaxBusinessReviews;
- (BOOL)includeBusinessCategories;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (BOOL)hasIncludeBusinessCategories;
- (BOOL)includeBusinessRating;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (BOOL)hasIncludeBusinessRating;
- (int)businessSortOrder;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (BOOL)hasBusinessSortOrder;
- (id)sessionGUID;
- (void)setHasSessionID:(BOOL)arg1;
- (BOOL)hasSearchContextSubstring;
- (BOOL)hasSearchContext;
- (id)searchSubstringAtIndex:(unsigned int)arg1;
- (unsigned int)searchSubstringsCount;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (unsigned int)filterByBusinessCategorysCount;
- (BOOL)hasSessionGUID;
- (void)setIncludeAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (int)includeAdditionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)addIncludeAdditionalPlaceType:(int)arg1;
- (void)clearIncludeAdditionalPlaceTypes;
- (int*)includeAdditionalPlaceTypes;
- (unsigned int)includeAdditionalPlaceTypesCount;
- (BOOL)hasSearch;
- (void)setBusinessIDs:(long long*)arg1 count:(unsigned int)arg2;
- (long long)businessIDAtIndex:(unsigned int)arg1;
- (void)addBusinessID:(long long)arg1;
- (void)clearBusinessIDs;
- (long long*)businessIDs;
- (unsigned int)businessIDsCount;
- (void)setPlaceIDs:(long long*)arg1 count:(unsigned int)arg2;
- (long long)placeIDAtIndex:(unsigned int)arg1;
- (void)addPlaceID:(long long)arg1;
- (void)clearPlaceIDs;
- (long long*)placeIDs;
- (unsigned int)placeIDsCount;
- (void)setIncludeGeoId:(BOOL)arg1;
- (void)addSearchSubstring:(id)arg1;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (void)setIncludeQuads:(BOOL)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setSearchContextSubstring:(id)arg1;
- (void)setSearchSubstrings:(id)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (long long)geoId;
- (void)setHasGeoId:(BOOL)arg1;
- (BOOL)hasGeoId;
- (void)setGeoId:(long long)arg1;
- (BOOL)includePhonetics;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (BOOL)hasIncludePhonetics;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setSessionGUID:(id)arg1;
- (BOOL)hasSessionID;
- (BOOL)hasMapRegion;
- (BOOL)hasLocation;
- (void)setAddress:(id)arg1;
- (Class)responseClass;
- (id)address;
- (int)sessionID;
- (void)setSessionID:(int)arg1;
- (id)dictionaryRepresentation;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)search;
- (BOOL)readFrom:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (id)searchContext;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (void)setSearch:(id)arg1;
- (BOOL)hasAddress;
- (void)setHasMaxResults:(BOOL)arg1;
- (BOOL)hasMaxResults;
- (void)setHasResultOffset:(BOOL)arg1;
- (BOOL)hasResultOffset;
- (int)resultOffset;
- (void)setResultOffset:(int)arg1;
- (int)maxResults;
- (id)mapRegion;
- (void)setMapRegion:(id)arg1;
- (void)setMaxResults:(int)arg1;
- (void)_applyDeviceLocation;
- (void)_setCLClientLocation:(const struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; }*)arg1;

@end

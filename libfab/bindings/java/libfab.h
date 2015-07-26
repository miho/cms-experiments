/**
 * Libfab binding for JNAerator
 */

// ********************************************
// **** FILE IO BEGIN ****
// ********************************************
#include <stdio.h>

struct ASDF_;

/** @brief Saves an ASDF to a file
    @param asdf Pointer to an ASDF
    @param filename Name of file
*/
void  asdf_write(struct ASDF_* const asdf, const char* filename);

/** @brief Loads an ASDF from a file
    @param filename Filename
    @returns The loaded ASDF
*/
struct ASDF_*  asdf_read(const char* filename);

// ********************************************
// **** FILE IO END ****
// ********************************************

// ********************************************
// **** CMS BEGIN ****
// ********************************************

struct ASDF_;
struct Mesh_;

/** @brief Triangulates an ASDF using cubical marching squares. */
struct Mesh_* triangulate_cms(struct ASDF_* const asdf);

// ********************************************
// **** CMS END ****
// ********************************************

// ********************************************
// **** PARSER BEGIN ****
// ********************************************

struct MathTree_;

/** @brief Parses a prefix-notation math string
    @param input A null-terminated math string
    @returns The constructed MathTree, or NULL if failed
*/
struct MathTree_* parse(const char* input);

// ********************************************
// **** PARSER END ****
// ********************************************

// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.52%
// test_accuracy: 58.33%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:46:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.004236, 1.004201,
    0.161352, -0.161261,
    0.159612, -0.159622,
    0.112904, -0.112960,
    -0.555074, 0.555085,
    -0.152307, 0.152312,
    0.385896, -0.385902,
    -0.148057, 0.148043,
    -1.175691, 1.175646,
    0.570208, -0.570128,
    -0.202590, 0.202569,
    0.373457, -0.373482,
};

float Cg_init[2] = {
    -0.472066, -0.472057
};

float xstd_init[12] = {
    0.001053, 0.000084, 0.011700, 0.083045, 0.002836, 0.000789, 0.080845, 0.168608, 0.000892, 0.000123, 0.017861, 0.072748
};

float xmean_init[12] = {
    0.006516, -0.007682, 0.004656, 0.144445, 0.008690, -0.006848, 0.101905, 0.450159, 0.004338, -0.007716, 0.008466, 0.130318
};


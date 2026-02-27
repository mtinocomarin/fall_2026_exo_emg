// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 56.25%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_3.txt', 'act1\\trial_5.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_5.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.692158, 1.692157,
    -0.559325, 0.559432,
    0.000000, 0.000000,
    -0.288675, -0.288675,
    -0.910921, -0.910921,
    -0.955117, -0.955117,
    -0.715580, -0.715580,
    -0.549298, -0.549298,
    1.271300, 1.271300,
    2.842434, 2.842434,
    2.018822, 2.018822,
    1.813282, 1.813282,
};

float Cg_init[2] = {
    -4.089064, 2.360129
};

float xstd_init[12] = {
    0.000295, 0.000013, 1.000000, 0.019149, 0.002127, 0.000701, 0.065952, 0.139332, 0.002058, 0.000559, 0.072847, 0.173436
};

float xmean_init[12] = {
    0.002619, -0.007914, 0.000000, 0.012500, 0.008656, -0.006518, 0.150000, 0.520000, 0.006293, -0.007076, 0.091667, 0.300000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.70%
// test_accuracy: 76.14%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:04:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.612553, 0.612592,
    -0.183453, 0.183487,
    0.296722, -0.296770,
    0.680328, -0.680329,
    0.661834, -0.662037,
    -0.837247, 0.837488,
    0.034735, -0.034769,
    -0.023517, 0.023503,
    -0.384871, 0.385121,
    0.348917, -0.349386,
    -0.316557, 0.316724,
    0.133560, -0.133383,
};

float Cg_init[2] = {
    -0.271562, -0.271615
};

float xstd_init[12] = {
    0.003767, 0.001395, 0.105324, 0.165793, 0.001488, 0.000434, 0.024751, 0.074373, 0.001595, 0.000088, 0.015544, 0.065779
};

float xmean_init[12] = {
    0.009834, -0.006248, 0.170607, 0.584944, 0.003154, -0.007739, 0.006061, 0.048352, 0.003229, -0.007809, 0.004280, 0.067216
};


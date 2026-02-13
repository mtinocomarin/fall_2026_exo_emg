// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.04%
// test_accuracy: 77.88%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 16:06:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.590371, 0.590414,
    -0.377673, 0.377644,
    0.393380, -0.393409,
    0.640034, -0.640022,
    0.852406, -0.852377,
    -0.846274, 0.846239,
    -0.182552, 0.182561,
    -0.092620, 0.092612,
    0.801589, -0.801553,
    -0.093685, 0.093601,
    -0.360933, 0.360969,
    0.031323, -0.031311,
};

float Cg_init[2] = {
    -0.491612, -0.491611
};

float xstd_init[12] = {
    0.003695, 0.001380, 0.105244, 0.168130, 0.001245, 0.000385, 0.019629, 0.067926, 0.000521, 0.000076, 0.015518, 0.061942
};

float xmean_init[12] = {
    0.009822, -0.006228, 0.177436, 0.593048, 0.003060, -0.007759, 0.005052, 0.046667, 0.003096, -0.007815, 0.004103, 0.062393
};

